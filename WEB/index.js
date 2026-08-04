let str1 = ''
let str2 = ''
let str3 = ''
let out
function num(id) {
    r = String(id)
    if (r != 'sum' && r != 'sub' && r != 'prd' && r != 'div' && r != 'eq') {
        str1 += document.getElementById(r).textContent
        document.getElementById("n1").innerText = str1
    }
    else {
        str2 += document.getElementById(r).textContent
        document.getElementById("op").innerText = str2
    }
}


