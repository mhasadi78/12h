/*
The MIT License (MIT)

Copyright (c) 2017

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

Author: Rodrigo <Ravf> Villalba
*/

#if !defined _H_W_MAIN_WINDOW_
#define _H_W_MAIN_WINDOW_

#include <gtk/gtk.h>

// @SUB-RUTINA 	: 	w_main_window_load_from_builder(GtkBuilder *)
// @UTILIDAD	: 	obtiene y almacena la dirección de memoria
//					de la ventana principal de la gui.
// @PARAMETROS	: 	builder > dirección del manipulador de archivos .glade
// @RETORNO		:	ninguno.
void w_main_window_load_from_builder(GtkBuilder *builder);

// @SUB-RUTINA  :	w_main_window_signal_connect()
// @UTILIDAD	:	establece la señal de salida de la ventana principal.	
// @PARAMETROS	:	ninguno.
// @RETORNO		:	ninguno.
void w_main_window_signal_connect(void);

// @SUB-RUTINA  :	w_main_window_show_all()
// @UTILIDAD	:	mostrar todos los widgets que contiene.	
// @PARAMETROS	:	ninguno.
// @RETORNO		:	ninguno.
void w_main_window_show_all(void);

// @SUB-RUTINA 	:	w_end_game_destroy()
// @UTILIDAD	:	elimina todos los widget y referencias
//					asociados al contenedor principal.
// @PARAMETROS	:	ninguno.
// @RETORNO		:	ninguno.
void w_main_window_destroy(void);

#endif // _H_W_MAIN_WINDOW_