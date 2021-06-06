object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 250
  ClientWidth = 600
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 504
    Top = 8
    Width = 5
    Height = 14
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Swis721 BlkEx BT'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 95
    Top = 189
    Width = 97
    Height = 34
    Caption = 'Check'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Georgia'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 308
    Top = 46
    Width = 226
    Height = 83
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'System'
    Font.Style = [fsBold]
    Lines.Strings = (
      'Memo1')
    ParentFont = False
    TabOrder = 1
  end
  object Button2: TButton
    Left = 308
    Top = 128
    Width = 113
    Height = 28
    Caption = '<-'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 421
    Top = 128
    Width = 113
    Height = 28
    Caption = '->'
    TabOrder = 3
    OnClick = Button3Click
  end
  object StringGrid1: TStringGrid
    Left = 59
    Top = 46
    Width = 133
    Height = 29
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 4
  end
  object StringGrid2: TStringGrid
    Left = 59
    Top = 73
    Width = 211
    Height = 29
    ColCount = 8
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 5
  end
  object StringGrid3: TStringGrid
    Left = 59
    Top = 100
    Width = 185
    Height = 29
    ColCount = 7
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 6
  end
  object StringGrid4: TStringGrid
    Left = 59
    Top = 127
    Width = 185
    Height = 29
    ColCount = 7
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 7
  end
  object StringGrid5: TStringGrid
    Left = 59
    Top = 154
    Width = 185
    Height = 29
    ColCount = 7
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 8
  end
  object Button5: TButton
    Left = 0
    Top = 0
    Width = 57
    Height = 25
    Caption = '<-'
    TabOrder = 9
    OnClick = Button5Click
  end
end
