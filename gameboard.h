//---------------------------------------------------------------------------

#ifndef gameboardH
#define gameboardH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ChessBrd.hpp"
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include "chessbrd.hpp"



//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TRichEdit *GameDispEdit;
        TMemo *EditGameSend;
        TButton *BackButton;
        TButton *ForwardButton;
        TStaticText *TimeBlackLabel;
        TStaticText *StaticText1;
        TStaticText *TimeWhiteLabel;
        TStaticText *StaticText2;
        TButton *ActionButton;
        TButton *DrawButton;
        TButton *ResignButton;
        TChessBrd *Chessboard;
        TTimer *BlackTimer;
        TTimer *WhiteTimer;
        void __fastcall ChessboardLegalMove(TObject *Sender, Square oldSq,
          Square newSq);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
        void __fastcall ChessboardThreefoldPosition(TObject *Sender);
        void __fastcall WhiteTimerTimer(TObject *Sender);
        void __fastcall BlackTimerTimer(TObject *Sender);
        void __fastcall DrawButtonClick(TObject *Sender);
        void __fastcall ResignButtonClick(TObject *Sender);
        void __fastcall EditGameSendKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditGameSendKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall GameDispEditChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
  void __fastcall DisplayMove(Square oldSq, Square newSq, AnsiString posi);
  AnsiString __fastcall SquareToString(Square Sq);
        __fastcall TForm2(TComponent* Owner);
};

/*typedef enum {None, A8,B8,C8,D8,E8,F8,G8,H8,
                  A7,B7,C7,D7,E7,F7,G7,H7,
                  A6,B6,C6,D6,E6,F6,G6,H6,
                  A5,B5,C5,D5,E5,F5,G5,H5,
                  A4,B4,C4,D4,E4,F4,G4,H4,
                  A3,B3,C3,D3,E3,F3,G3,H3,
                  A2,B2,C2,D2,E2,F2,G2,H2,
                  A1,B1,C1,D1,E1,F1,G1,H1} Square; */
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif