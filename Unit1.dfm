object Form1: TForm1
  Left = 194
  Top = 115
  Width = 584
  Height = 343
  Caption = 'Architecture'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 248
    Width = 92
    Height = 13
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1087#1086#1083#1077#1081
  end
  object Label2: TLabel
    Left = 8
    Top = 280
    Width = 104
    Height = 13
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1079#1072#1087#1080#1089#1077#1081
  end
  object Button1: TButton
    Left = 248
    Top = 248
    Width = 153
    Height = 49
    Caption = #1057#1088#1077#1076#1085#1080#1081' '#1041#1072#1083#1083
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 120
    Top = 248
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 120
    Top = 280
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 2
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 401
    Height = 201
    DataSource = DataSource1
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 200
    Width = 400
    Height = 41
    DataSource = DataSource1
    TabOrder = 4
  end
  object ComboBox1: TComboBox
    Left = 408
    Top = 8
    Width = 153
    Height = 21
    ItemHeight = 13
    TabOrder = 5
  end
  object Button2: TButton
    Left = 408
    Top = 32
    Width = 153
    Height = 49
    Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083' '#1087#1086' '#1087#1088#1077#1076#1084#1077#1090#1091
    TabOrder = 6
    OnClick = Button2Click
  end
  object Sort: TRadioGroup
    Left = 408
    Top = 96
    Width = 153
    Height = 81
    Caption = 'Sorting'
    Items.Strings = (
      #1042' '#1072#1083#1092#1072#1074#1080#1090#1085#1086#1084' '#1087#1086#1088#1103#1076#1082#1077
      #1042' '#1087#1086#1088#1103#1076#1082#1077' '#1074#1086#1079#1088#1086#1089#1090#1072#1085#1080#1103
      #1042' '#1087#1086#1088#1103#1076#1082#1077' '#1091#1073#1099#1074#1072#1085#1080#1103)
    TabOrder = 7
  end
  object Button3: TButton
    Left = 408
    Top = 184
    Width = 153
    Height = 57
    Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 8
    OnClick = Button3Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Admin\Down' +
      'loads\architecture\'#1042#1077#1076#1086#1084#1086#1089#1090#1100'.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 368
    Top = 8
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1057#1090#1091#1076#1077#1085#1090#1099
    Left = 368
    Top = 40
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    OnDataChange = DataSource1DataChange
    Left = 368
    Top = 72
  end
end
