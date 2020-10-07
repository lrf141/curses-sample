#include<stdio.h>
#include<ncurses.h>
#include<unistd.h>

int main() {
	// 端末制御開始
	initscr();

	// 色情報を定義
	start_color();
	// 1 を文字列が赤、背景を青とする
	init_pair(1, COLOR_RED, COLOR_BLUE);
	bkgd(COLOR_PAIR(1));

	// 画面を表示
	erase();
	// 10行20列目にカーソルを移動
	move(10, 20);
	// 文字列を追加
	addstr("hello,world");
	refresh();

	timeout(-1);
	// キー入力を受ける
	getch();

	// 端末制御の終了
	endwin();
	return 0;
}
