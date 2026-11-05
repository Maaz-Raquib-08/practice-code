const mongoose= require("mongoose");
const Chat=require("./models/chat.js");

main()
.then(()=>{
    console.log("connection successful"); 
})
.catch(err=> console.log(err));

async function main() {
    await mongoose.connect('mongodb://127.0.0.1:27017/whatsapp');
}
let allChats=[
{
    from:"neha",
    to:"priya",
    msg:"send me your exam sheet",
    created_at:new Date(),
},
{
    from:"kaif",
    to:"maaz",
    msg:"send me your exam paper",
    created_at:new Date(),   
},
{
    from:"maaz",
    to:"kaif",
    msg:"ok i share my examm paper",
    created_at:new Date(),
},
{
    from:"yakin",
    to:"anees",
    msg:"please help me",
    created_at:new Date(),
},
{
    from:"anees",
    to:"yakin",
    msg:"but why i help you ?",
    created_at:new Date(),
},
{
    from:"rashid",
    to:"tausif",
    msg:"where are you ?",
    created_at:new Date(),
},
{
    from:"tausif",
    to:"rashid",
    msg:"i am currently in boys hostel 5",
    created_at:new Date(),
}
];

Chat.insertMany(allChats);



