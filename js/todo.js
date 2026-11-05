let btn=document.querySelector("button");
let ul=document.querySelector("ul");
// let li=document.querySelector("li"); 
let inp=document.querySelector("input");

btn.addEventListener("click", function(){
    let item =document.createElement("li");    
    item.innerText=inp.value;
    
    let delBtn =document.createElement("button");
    delBtn.innerText="×";
    delBtn.classList.add("delete");
    item.appendChild(delBtn);
    ul.appendChild(item);
    inp.value = " ";

});
ul.addEventListener("click",function(event){
   if(event.target.nodeName=="BUTTON"){
    let list=event.target.parentElement;
    list  .remove(); 
}
});
inp.addEventListener("keydown", function(e) {
  if (e.key === "Enter") {
    btn.click(); 
  }
});


// let delbtns=document.querySelectorAll(".delete");
// for(delBtn of delbtns){
// delBtn.addEventListener("click",function(){
//     let par=this.parentElement;
//     console.log("par");
//     par.remove();
// })
// }
