s="({[})"
st=[]
for i in s:
    if i=="(":
        st.append(")")
    elif i=="{":
        st.append("}")
    elif i=="[":
        st.append("]")
    elif  not st or st.pop()!=i:
        print("False")
print(not st)
    