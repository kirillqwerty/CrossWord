object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 249
  ClientWidth = 635
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
    Left = 544
    Top = 8
    Width = 21
    Height = 14
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Swis721 BlkEx BT'
    Font.Style = []
    ParentFont = False
  end
  object StringGrid1: TStringGrid
    Left = 59
    Top = 46
    Width = 107
    Height = 29
    ColCount = 4
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 0
  end
  object StringGrid2: TStringGrid
    Left = 59
    Top = 73
    Width = 183
    Height = 29
    ColCount = 7
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 1
  end
  object StringGrid3: TStringGrid
    Left = 59
    Top = 100
    Width = 263
    Height = 29
    ColCount = 10
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 2
  end
  object StringGrid4: TStringGrid
    Left = 59
    Top = 128
    Width = 183
    Height = 29
    ColCount = 7
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ScrollBars = ssNone
    TabOrder = 3
  end
  object StringGrid5: TStringGrid
    Left = 59
    Top = 154
    Width = 107
    Height = 29
    ColCount = 4
    DefaultColWidth = 25
    DefaultRowHeight = 25
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 4
  end
  object Button1: TButton
    Left = 0
    Top = 0
    Width = 57
    Height = 25
    Caption = '<-'
    TabOrder = 5
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 142
    Top = 189
    Width = 97
    Height = 34
    Caption = 'Check'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Georgia'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = Button2Click
  end
  object Memo1: TMemo
    Left = 350
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
    TabOrder = 7
  end
  object Button3: TButton
    Left = 350
    Top = 128
    Width = 113
    Height = 29
    Caption = '<-'
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 463
    Top = 128
    Width = 113
    Height = 29
    Caption = '->'
    TabOrder = 9
    OnClick = Button4Click
  end
end
