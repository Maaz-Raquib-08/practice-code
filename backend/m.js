const express = require("express");
const app = express();

const port =9090;
app.use(express.static("public"));
app.set("view engine","ejs");
app.get("/", (req,res)=>{
    res.render("home");
});

app.get("/rolldice", (req,res)=>{
    let diceval=Math.floor(Math.random()*6)+1; 
    res.render("rolldice",{num:diceval});
    
    }); 

// app.get("/ig/:username",(req,res)=>{
//     const followers =["adam","maaz","abc"];
//     let {username}=req.params;
//     console.log(username);
//     res.render("insta",{username , followers});
// });

app.get("/ig/:username",(req,res)=>{
    let {username} = req.params;
    const instaData = require("./data.json");
    const data= instaData[username];
    // res.render("insta.ejs",{ data});
    if(data){
        res.render("insta.ejs",{data});
    }
    else{
        res.render("no.ejs");
    }
})
app.listen(port, ()=>{
    console.log(`listening on port ${port}`);
}); 