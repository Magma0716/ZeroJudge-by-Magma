outputs = ["Hello, World!", "hello, world", "Halo, word!!!", "世界，您好！", "https://zerojudge.tw/ShowProblem?problemid=a001"]

# Display one of the outputs based on the current time
print(outputs[int(time.time()) % 5])