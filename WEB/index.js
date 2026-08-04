let str1 = ''
let str2 = ''
let str3 = ''
function num(id) {
    r = String(id)
    if (r != 'sum' && r != 'sub' && r != 'prd' && r != 'div' && r != 'eq') {
        if (str2 != '') {
            str3 += document.getElementById(r).textContent
            document.getElementById("n2").innerText = str3
        }
        else {
            str1 += document.getElementById(r).textContent
            document.getElementById("n1").innerText = str1
        }

    }

    else {
        if ((document.getElementById(r).textContent) != '=') {
            str2 += document.getElementById(r).textContent
            document.getElementById("op").innerText = str2
        }
        else {
            let num1 = Number(str1)
            let num2 = Number(str3)
            let out;

            if (str2 === '+') {
                out = num1 + num2
            } else if (str2 === '-') {
                out = num1 - num2
            } else if (str2 === '*') {
                out = num1 * num2
            } else if (str2 === '/') {
                out = num1 / num2
            }

            OUTPUT ='='+ out
            document.getElementById("out").innerText = OUTPUT
            console.log(OUTPUT)
        }
    }

}


