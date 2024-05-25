import os
import fnmatch


def find_files(root_dir, extension):
    matches = []
    for root, dirnames, filenames in os.walk(root_dir):
        for filename in fnmatch.filter(filenames, f"*.{extension}"):
            matches.append(os.path.join(filename))
    return matches


files = find_files("./input/", "txt")
print(str(len(files)) + "個のテストケースを見つけました。")

os.system("g++ AtCoder.cpp")
print("コードコンパイル実行完了。テストケースを実行します...")

for i in range(len(files)):
    os.system("./a.out < input/" + files[i] + "> output/" + files[i])
    print("\r" + str(i + 1) + "個完了 / " + str(len(files)) + "個中", end="")

print("\n完了しました")
