//---
//WNDPROC de la fen�tre "A propos"
//---
//Fichier �crit par Nuri Yuri le 27/10/2014
//---
#include "stdafx.h"

BOOL CALLBACK About_WNDPROC(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	//Quelque soit l'action, si il y en a une vu l'aspect de la fen�tre on peut fermer
	if(message==WM_COMMAND || message==WM_CLOSE)
		EndDialog(hDlg,0);
	return FALSE;
}