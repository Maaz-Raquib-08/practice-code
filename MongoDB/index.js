const mongoose=require("mongoose");

main()
.then((res)=>{
    console.log("connection successful") ;
})
.catch(err => console.log(err));

async function main() {
  await mongoose.connect('mongodb://127.0.0.1:27017/test');
}
const userschema= new mongoose.Schema({
    name:String,
    email:String,
    age:Number,
}); 
 
const User=mongoose.model("User",userschema);
User.deleteOne({age:21})
.then(res=>{
    console.log(res);
}) 


// User.findOneAndUpdate({name:"kaif"},{email:"kaif@gmail.com"},{new:true})
// .then((res)=>{
//     console.log(res);
// })
// .catch((err)=>{
//     console.log(err);
// });

// User.findOne({age:{$gt:20}})
// .then((res)=>{
//     console.log(res);
// })
// .catch((err)=>{
// console.log(err);
// });
// const user1=new User({
//     name:"maaz",
//     email:"maazraquib@gmail.com",
//     age:20,
// });

// const user2=new User({
//     name:"adil",
//     email:"adil3234@gmail.com",
//     age:25,
// });
// user1.save();
// user2
// .save()
// .then((res)=>{
//     console.log(res);
// })
// .catch((err)=>{
//     console.log(err);
// });
// User.insertMany([
//     {name:"rashid", email:"rashid@gmail.com",age:50},
//     {name:"yakin", email:"yakin@gmail.com",age:21},
//     {name:"anees", email:"anees@gmail.com",age:25},
// ]).then((res)=>{
//     console.log(res);
// });