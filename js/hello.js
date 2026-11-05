
// // // // // //  let square =(n)=>n*n
// // // // // //  console.log(square(6));
// // // // // setInterval(()=>{
// // // // //         console.log("maaz");
// // // // // },4000);
// // // // // console.log("hello");
// // // // // console.log("kya hall h");
// // // // // clearInterval(5)
// // // // let even =(n)=>n%2==0
       
// // // // console.log(even(7));
// // // // let arr=[2,3,4,5,6,7,8,9,12,23,45,7];
// // // // let result=arr.reduce((max,el)=>{
// // // //         if(el>max){
// // // //                 return el;
// // // //         }else{
// // // //                 return max;
// // // //         }
// // // // });
// // // // let arr1=[8,2,3,4];
// // // // let arr2=[arr1];
// // // // arr1[1]=90;
// // // // console.log(arr1);
// // // // console.log(arr2);
// // // let arr1 = [1, 2, 3];
// // // let arr2 = [...arr1]; // spread operator se copy

// // // arr1[0] = 99;

// // // console.log(arr1); // [99, 2, 3]
// // // console.log(arr2); // [1, 2, 3]  <-- change nahi hua

// let btn =document.querySelector("button");

// btn.addEventListener("click" ,function(){
//     let h3=document.querySelector("h3"); 
//     let randomColor = RandomColor();
//     h3.innerText= randomColor;

//     let div=document.querySelector("div");
//     div.style.backgroundColor=randomColor;

// });

// function RandomColor(){
//     let red=Math.floor(Math.random()*255);
//      let green=Math.floor(Math.random()*255);
//       let blue=Math.floor(Math.random()*255);

//       let color= `rgb(${red},${green},${blue})`;
//       return color;
// }
// h3=document.querySelector("h3");
// function changeColor(color ,delay){
//     return new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         h3.style.color = color;
//         console.log(`color changed to ${color}!`);
//         resolve("color changed !");     
//         },delay);
//     });
// }
//     async function demo() {
//         await changeColor("red",1000);
//         await changeColor("yellow",1000);
//         await changeColor("blue",1000);
//           changeColor("green",1000);
        
//     }
//     let a =5; 

// // changeColor("red", 1000)
// // .then(()=> {
// //     console.log("red color was completed");
// //     return changeColor("orange",1000);
// // })
// // .then(()=>{
// //     console.log("orange color was completed");
// //     return changeColor("green",1000);
// // })
// // .then(()=>{
// //     console.log("blue color was completed");
// // });
// // changeColor("red",1000,()=>{
// //     changeColor("orange",1000,()=>{ 
// //         changeColor("blue",1000,()=>{
// //             changeColor("yellow",1000,()=>{
// //                 changeColor("green",1000);

// //             });
// //         });
// //     });
// // });


// let url =" https://catfact.ninja/fact";
// fetch(url)
// .then((res)=>{
//     console.log(res);
//      return res.json();
//     // console.log(res.json());
// })
// .then((data)=>{
//     console.log("data1=",data.fact);
//     return fetch(url);
// })
// .then((res)=>{
//     return res.json();
// })
// .then((data2)=>{
//     console.log("data2",data2.fact);
// })
// .catch((err)=>{
//     console.log("erroe -",err);
// });
// let url="https://catfact.ninja/fact2";
// async function getfacts() {
// try{
// let res=await fetch(url);
// let data= await res.json();
// console.log(data.fact);    
// }catch(e){
//     console.log("error -",e);
// }
// }
// const url = "https://icanhazdadjoke.com/";
// async function getJokes(){
//     try{
//         const config={ headers: {Accept: "application/json"}};
//         let res = await axios.get(url , config);
//         console.log(res.data);
//     }
//     catch(err){
//             console.log(err); 
//     }
// }


let url="http://universities.hipolabs.com/search?name=";
let btn =document.querySelector("button");

btn.addEventListener("click",async ()=>{
    let country= document.querySelector("input").value;
    console.log(country);
    
    let colleges = await getcolleges(country);
    show(colleges);
});
    function show(colleges){
        let List=document.querySelector("#list");  
        List.innerText="";
        for(col of colleges){
            console.log(col.name);
            let li= document.createElement("li");
            li.innerText=col.name;
            List.appendChild(li); 
        }
    }
//let country ="nepal";
async function getcolleges(country){
    try{
        let res=await axios.get(url+country);
        return res.data;
    }catch(e){
        console.log("error : ",e);
        return []; 
    }
}
