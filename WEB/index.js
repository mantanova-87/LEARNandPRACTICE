const read=document.getElementById("count-el").textContent
count=Number(read)
function increment(){
    count=count+1
    document.getElementById("count-el").innerText=String(count)
}