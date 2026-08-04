let str1 = ''
let str2 = ''
let str3 = ''
let out
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
        if ((document.getElementById(r).textContent)!='=') 
        {
            str2 += document.getElementById(r).textContent
            document.getElementById("op").innerText = str2
        }
        else
        {
            num1=Number(str1)
            num2=Number(str3)
            if ((document.getElementById(r).textContent)=='+') 
            {
               out=num1+num2
               document.getElementById("out").innerText=out
            }

        }
        
    }
}


