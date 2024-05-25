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

print("初期シード値を入力：",end="")
seed = int(input())

os.system("g++ AtCoder.cpp")
print("コードコンパイル実行完了。テストケースを実行します...")

for i in range(len(files)):
    number_len = len(files[i])-len(".txt")
    number = int(files[i][0:number_len])
    number += seed
    output_filename = str(number).zfill(number_len) + ".txt"
    os.system("./a.out < input/" + files[i] + "> output/" + output_filename)
    print("\r" + str(i + 1) + "個完了 / " + str(len(files)) + "個中", end="")

print("\n完了しました")
