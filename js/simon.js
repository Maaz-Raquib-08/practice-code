 let gameseq=[];
 let userseq=[];

 let btns=["one","two","three","four"];

 let start=false;
 let level=0;
 let h2=document.querySelector("h2");
 document.addEventListener("keypress",function(){
    if(start==false){
      //   console.log("game is started");
        start=true;
        levelup();
    }
    
 });
 function btnflash(btn){
    btn.classList.add("flash");
    setTimeout(function(){
        btn.classList.remove("flash");
    },250)
 }
  function userflash(btn){
    btn.classList.add("userflash");
    setTimeout(function(){
        btn.classList.remove("userflash");
    },250);
 }
 function levelup(){
   userseq=[];
    level++;
     h2.innerText=`level ${level}`;
    
     let randidx=Math.floor(Math.random()*4);
     let randcolor =btns[randidx];
     let randbtn=document.querySelector(`.${randcolor}`);
     gameseq.push(randcolor);
     btnflash(randbtn);
 }
 function checkans(idx){
    if(userseq[idx]===gameseq[idx]){
      if(userseq.length==gameseq.length) { 
         setTimeout(levelup,1000);
      }
      //  console.log("same value");  
    }else{
        h2.innerHTML=`Game over ! Press any key to start.`;
        document.querySelector("body").style.backgroundColor = "red";
        setTimeout(function () {
         document.querySelector("body").style.backgroundColor = "white";
        }, 150);
         reset();
      }
 }
 function btnpress(){
    let btn = this;
    userflash(btn);   
    usercolor = btn.getAttribute("id");
    userseq.push(usercolor);
    checkans(userseq.length-1);  
 }
 let allbtns=document.querySelectorAll(".btn");
 for(btn of allbtns){
    btn.addEventListener("click",btnpress);
 }
 function reset(){
   start=false;
   gameseq=[];
   userseq=[];
   level=0; 
 }