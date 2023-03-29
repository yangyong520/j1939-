#encoding='utf-8'
import  PyPDF2
import pdfplumber
txt=''
with pdfplumber.open("SAE J1939-71-2012.pdf") as p:
    for i in range(31,947):
        pag=p.pages[i]
        txt += pag.extract_text()
    with open("spn.txt", "w", encoding="utf-8") as f:
        f.write(txt)
#     page =p.pages[609]
#     txt=page.extract_text()
# with open("test.txt", "w",encoding="utf-8") as f:
#     f.write(txt)