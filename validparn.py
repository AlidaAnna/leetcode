def fun():
    s='({}])'
    st=[]
    hm={')':'(','}':'{',']':'['}
    for i in s:
        if st and i in "})]" and st[-1]==hm[i]:
            st.pop()
        else:
            st.append(i)
    return not st
print(fun())