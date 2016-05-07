object Form3: TForm3
  Left = 240
  Top = 100
  Width = 708
  Height = 401
  Caption = #1042#1077#1076#1077#1085#1080#1077' '#1089#1087#1088#1072#1074#1086#1095#1085#1080#1082#1086#1074
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCanResize = FormCanResize
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 700
    Height = 367
    ActivePage = TabSheet1
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Style = tsFlatButtons
    TabIndex = 0
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = #1058#1080#1087' '#1087#1086#1077#1079#1076#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      object DBGrid1: TDBGrid
        Left = 16
        Top = 24
        Width = 641
        Height = 217
        DataSource = DM.DStip_poezda
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = [fsBold]
        Columns = <
          item
            Expanded = False
            FieldName = #1058#1080#1087'_'#1087
            Title.Caption = #1058#1080#1087' '#1087#1086#1077#1079#1076#1072
            Width = 614
            Visible = True
          end>
      end
      object BitBtn1: TBitBtn
        Left = 80
        Top = 256
        Width = 73
        Height = 57
        Caption = '<<'
        TabOrder = 1
        OnClick = BitBtn1Click
      end
      object BitBtn2: TBitBtn
        Left = 152
        Top = 256
        Width = 75
        Height = 57
        Caption = '<'
        TabOrder = 2
        OnClick = BitBtn2Click
      end
      object BitBtn3: TBitBtn
        Left = 224
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Add'
        TabOrder = 3
        OnClick = BitBtn3Click
      end
      object BitBtn4: TBitBtn
        Left = 296
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Del'
        TabOrder = 4
        OnClick = BitBtn4Click
      end
      object BitBtn5: TBitBtn
        Left = 368
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Save'
        TabOrder = 5
        OnClick = BitBtn5Click
      end
      object BitBtn6: TBitBtn
        Left = 440
        Top = 256
        Width = 75
        Height = 57
        Caption = '>'
        TabOrder = 6
        OnClick = BitBtn6Click
      end
      object BitBtn7: TBitBtn
        Left = 512
        Top = 256
        Width = 75
        Height = 57
        Caption = '>>'
        TabOrder = 7
        OnClick = BitBtn7Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1058#1080#1087' '#1074#1072#1075#1086#1085#1072
      ImageIndex = 1
      object DBGrid2: TDBGrid
        Left = 16
        Top = 24
        Width = 641
        Height = 217
        DataSource = DM.DStip_vagona
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = [fsBold]
        Columns = <
          item
            Expanded = False
            FieldName = #1058#1080#1087'_'#1074
            Title.Caption = #1058#1080#1087' '#1074#1072#1075#1086#1085#1072
            Width = 440
            Visible = True
          end
          item
            Expanded = False
            FieldName = #1057#1090#1086#1080#1084#1086#1089#1090#1100'_'#1074
            Title.Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
            Width = 177
            Visible = True
          end>
      end
      object BitBtn8: TBitBtn
        Left = 80
        Top = 256
        Width = 75
        Height = 57
        Caption = '<<'
        TabOrder = 1
        OnClick = BitBtn8Click
      end
      object BitBtn9: TBitBtn
        Left = 152
        Top = 256
        Width = 75
        Height = 57
        Caption = '<'
        TabOrder = 2
        OnClick = BitBtn9Click
      end
      object BitBtn10: TBitBtn
        Left = 224
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Add'
        TabOrder = 3
        OnClick = BitBtn10Click
      end
      object BitBtn11: TBitBtn
        Left = 296
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Del'
        TabOrder = 4
        OnClick = BitBtn11Click
      end
      object BitBtn12: TBitBtn
        Left = 368
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Save'
        TabOrder = 5
        OnClick = BitBtn12Click
      end
      object BitBtn13: TBitBtn
        Left = 440
        Top = 256
        Width = 75
        Height = 57
        Caption = '>'
        TabOrder = 6
        OnClick = BitBtn13Click
      end
      object BitBtn14: TBitBtn
        Left = 512
        Top = 256
        Width = 75
        Height = 57
        Caption = '>>'
        TabOrder = 7
        OnClick = BitBtn14Click
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1057#1077#1088#1074#1080#1089
      ImageIndex = 2
      object DBGrid3: TDBGrid
        Left = 16
        Top = 24
        Width = 641
        Height = 217
        DataSource = DM.DSservis
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = [fsBold]
        Columns = <
          item
            Expanded = False
            FieldName = #1053#1072#1079#1074#1072#1085#1080#1077'_'#1089
            Title.Caption = #1053#1072#1079#1074#1072' '#1089#1077#1088#1074#1080#1089#1072
            Width = 330
            Visible = True
          end
          item
            Expanded = False
            FieldName = #1042#1072#1075#1086#1085
            Width = 176
            Visible = True
          end
          item
            Expanded = False
            FieldName = #1057#1090#1086#1080#1084#1086#1089#1090#1100'_'#1089
            Title.Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
            Visible = True
          end>
      end
      object BitBtn15: TBitBtn
        Left = 80
        Top = 256
        Width = 75
        Height = 57
        Caption = '<<'
        TabOrder = 1
        OnClick = BitBtn15Click
      end
      object BitBtn16: TBitBtn
        Left = 152
        Top = 256
        Width = 75
        Height = 57
        Caption = '<'
        TabOrder = 2
        OnClick = BitBtn16Click
      end
      object BitBtn17: TBitBtn
        Left = 224
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Add'
        TabOrder = 3
        OnClick = BitBtn17Click
      end
      object BitBtn18: TBitBtn
        Left = 296
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Del'
        TabOrder = 4
        OnClick = BitBtn18Click
      end
      object BitBtn19: TBitBtn
        Left = 368
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Save'
        TabOrder = 5
        OnClick = BitBtn19Click
      end
      object BitBtn20: TBitBtn
        Left = 440
        Top = 256
        Width = 75
        Height = 57
        Caption = '>'
        TabOrder = 6
        OnClick = BitBtn20Click
      end
      object BitBtn21: TBitBtn
        Left = 512
        Top = 256
        Width = 75
        Height = 57
        Caption = '>>'
        TabOrder = 7
        OnClick = BitBtn21Click
      end
    end
    object TabSheet4: TTabSheet
      Caption = #1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      ImageIndex = 3
      object DBGrid4: TDBGrid
        Left = 16
        Top = 24
        Width = 641
        Height = 217
        DataSource = DM.DSnapravlenie
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -19
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = [fsBold]
        Columns = <
          item
            Expanded = False
            FieldName = #1053#1072#1087#1088
            Title.Caption = #1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1084#1072#1088#1096#1088#1091#1090#1072
            Width = 627
            Visible = True
          end>
      end
      object BitBtn22: TBitBtn
        Left = 80
        Top = 256
        Width = 75
        Height = 57
        Caption = '<<'
        TabOrder = 1
        OnClick = BitBtn22Click
      end
      object BitBtn23: TBitBtn
        Left = 152
        Top = 256
        Width = 75
        Height = 57
        Caption = '<'
        TabOrder = 2
        OnClick = BitBtn23Click
      end
      object BitBtn24: TBitBtn
        Left = 224
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Add'
        TabOrder = 3
        OnClick = BitBtn24Click
      end
      object BitBtn25: TBitBtn
        Left = 296
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Del'
        TabOrder = 4
        OnClick = BitBtn25Click
      end
      object BitBtn26: TBitBtn
        Left = 368
        Top = 256
        Width = 75
        Height = 57
        Caption = 'Save'
        TabOrder = 5
        OnClick = BitBtn26Click
      end
      object BitBtn27: TBitBtn
        Left = 440
        Top = 256
        Width = 75
        Height = 57
        Caption = '>'
        TabOrder = 6
        OnClick = BitBtn27Click
      end
      object BitBtn28: TBitBtn
        Left = 512
        Top = 256
        Width = 75
        Height = 57
        Caption = '>>'
        TabOrder = 7
        OnClick = BitBtn28Click
      end
    end
  end
end
