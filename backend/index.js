// const express = require("express");
// const maaz= express();

// let port = 6060;
// maaz.listen(port, () => {
//     console.log(`app is listening on port ${port}`);
// });

// maaz.use((req,res,)=>{
//     console.log("request received");
    
// });
// maaz.get("/",(req,res)=>{
//     res.send("hello i am root");
// }); 
// maaz.get("/:username/:id",(req,res )=>{
//     let {username,id}=req.params;
//     console.log(req.params);
//     res.send(`welcome to the page of @${username}`);
// });  
// maaz.get("/search",(req,res)=>{
//     console.log(req.query);
//     res.send("no result");
// });  