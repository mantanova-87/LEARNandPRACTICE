const read=document.getElementById("count-el").textContent
count=Number(read)
function increment(){
    count=count+1
    document.getElementById("count-el").innerText=String(count)
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
    document.getElementById("count-el").innerText=count
}