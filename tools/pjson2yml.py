# 将 noTemplate=1 的 Hydro 题目列表转换成对应的 yml 格式
import json
import yaml
with open('p.json',encoding="utf8") as f:
    raw = json.load(f)
pdocs = raw["pdocs"]
res = {}
for pdoc in pdocs:
    now = {"title" : pdoc["title"], "docId" : pdoc["docId"], "tag" : pdoc["tag"]}
    res[pdoc["pid"]] = now
with open("p.yml","w+",encoding="utf-8") as f:
    yaml.dump(res, f, allow_unicode=True)
    