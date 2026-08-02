const read=document.getElementById("count-el")
count=Number(read.textContent)
function increment(){
    count=count+1
    read.innerText=String(count)
}
var out=document.getElementById("prev").textContent
function save(){
    entry=count
    dash=','
    out=out+entry+dash
    document.getElementById("prev").innerText=out
    count=0
    //
    // 
    read.innerText=count
}