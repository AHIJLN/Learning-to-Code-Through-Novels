
var n=-1;
// var img0=document.getElementsByTagName("img")[0];
// var img1=document.getElementsByTagName("img")[1]; 
// var img2=document.getElementsByTagName("img")[2];

// var li0=document.getElementsByTagName("li")[0];
// var li1=document.getElementsByTagName("li")[1];
// var li2=document.getElementsByTagName("li")[2];


function ChI(){

// if (n===0){
// li0.style.color="#FF0000";
// li1.style.color="#000000";
// li2.style.color="#000000";
// img0.style.display="inline"; 
// img1.style.display="none"; 
// img2.style.display="none";

// };



// if (n===1){

// li0.style.color="#000000";
// li1.style.color="#FF0000";
// li2.style.color="#000000";

// img0.style.display="none"; 
// img1.style.display="inline"; 
// img2.style.display="none";


// };
// if (n===2){


// li0.style.color="#000000";
// li1.style.color="#000000";
// li2.style.color="#FF0000";
// img0.style.display="none"; 
// img1.style.display="none"; 
// img2.style.display="inline";

// };


// (n===0)?li0.style.color="#FF0000":li0.style.color="#000000";

// (n===1)?li1.style.color="#FF0000":li1.style.color="#000000";

// (n===2)?li2.style.color="#FF0000":li2.style.color="#000000";

// (n===0)?img0.style.display="inline":img0.style.display="none";
// (n===1)?img1.style.display="inline":img1.style.display="none";
// (n===2)?img2.style.display="inline":img2.style.display="none";




for (var i=0;i<document.getElementsByTagName("li").length;i++){
    (n===i)?document.getElementsByTagName("li")[i].style.color="#FF0000":document.getElementsByTagName("li")[i].style.color="#000000";
    (n===i)?document.getElementsByTagName("img")[i].style.display="inline":document.getElementsByTagName("img")[i].style.display="none";

}

}


function num(){
n++;n %=3;

ChI();

};

setInterval(num,3000);//num和 num()的不同





// li2.index=2;

// li1.index=1;

// li0.index=0;

// li2.onclick=function(){
//     n=2;
//     ChI();
//     };
// li1.onclick=function(){
//     n=1;
// ChI();
// };

// li0.onclick=function(){
//     n=0;
// ChI();
// };




for(var i=0;i<document.getElementsByTagName("li").length;i++){
    document.getElementsByTagName("li")[i].index=i;
    document.getElementsByTagName("li")[i].onclick=function(){
n=this.index;
ChI();
};
};






var left=document.getElementById("left");
left.onclick=function(ev){

    n--;
if(n == -1){
n=2;
}
ChI();

}


var right=document.getElementById("right");
right.onclick=function(ev){
    n++;
if(n == 3){
n=0;
}
ChI();

}

