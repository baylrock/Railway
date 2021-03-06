object DM: TDM
  OldCreateOrder = False
  Left = 661
  Top = 115
  Height = 771
  Width = 628
  object rail: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.ACE.OLEDB.12.0;Data Source=rail.accdb;Persist' +
      ' Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.ACE.OLEDB.12.0'
    Left = 32
    Top = 16
  end
  object tip_poezda: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1058#1080#1087'_'#1087#1086#1077#1079#1076#1072
    Left = 32
    Top = 72
  end
  object poezd: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1055#1086#1077#1079#1076
    Left = 32
    Top = 128
    object poezd_: TIntegerField
      FieldName = #1053#1086#1084#1077#1088'_'#1087#1086#1077#1079#1076#1072
    end
    object poezd__: TIntegerField
      FieldName = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1087
    end
    object poezd_2: TIntegerField
      FieldName = #1050#1086#1076'_'#1085#1072#1087#1088
    end
    object poezd__2: TIntegerField
      FieldName = #1050#1086#1083'_'#1087#1083#1072#1094#1082'_'#1074#1072#1075
    end
    object poezd__3: TIntegerField
      FieldName = #1050#1086#1083'_'#1087#1083#1072#1094#1082'_'#1084#1077#1089#1090
    end
    object poezd__4: TIntegerField
      FieldName = #1050#1086#1083'_'#1082#1091#1087'_'#1074#1072#1075
    end
    object poezd__5: TIntegerField
      FieldName = #1050#1086#1083'_'#1082#1091#1087'_'#1084#1077#1089#1090
    end
    object poezd__6: TIntegerField
      FieldName = #1050#1086#1083'_'#1057#1042'_'#1074#1072#1075
    end
    object poezd__7: TIntegerField
      FieldName = #1050#1086#1083'_'#1057#1042'_'#1084#1077#1089#1090
    end
    object poezd__8: TIntegerField
      FieldName = #1050#1086#1083'_'#1074#1072#1075'_'#1088#1077#1089#1090
    end
    object poezdField: TStringField
      FieldKind = fkLookup
      FieldName = #1058#1080#1087'_'#1087#1086#1090#1103#1075#1091
      LookupDataSet = tip_poezda
      LookupKeyFields = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1087
      LookupResultField = #1058#1080#1087'_'#1087
      KeyFields = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1087
      Size = 150
      Lookup = True
    end
    object poezdField2: TStringField
      FieldKind = fkLookup
      FieldName = #1053#1072#1087#1088#1103#1084
      LookupDataSet = napravlenie
      LookupKeyFields = #1050#1086#1076'_'#1085#1072#1087#1088
      LookupResultField = #1053#1072#1087#1088
      KeyFields = #1050#1086#1076'_'#1085#1072#1087#1088
      Lookup = True
    end
  end
  object napravlenie: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
    Left = 32
    Top = 176
  end
  object punkti: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1055#1091#1085#1082#1090#1099
    Left = 32
    Top = 224
    object punkti_: TAutoIncField
      FieldName = #1050#1086#1076'_'#1087#1091#1085#1082#1090#1072
      ReadOnly = True
    end
    object punkti_2: TIntegerField
      FieldName = #1050#1086#1076'_'#1085#1072#1087#1088
    end
    object punktiDSDesigner: TWideStringField
      FieldName = #1055#1091#1085#1082#1090
      Size = 75
    end
    object punktiDSDesigner2: TIntegerField
      FieldName = #1050#1080#1083#1086#1084#1077#1090#1088
    end
    object punkti_3: TWideStringField
      FieldName = #1042#1088#1077#1084#1103'_'#1087#1088#1080#1073
      Size = 10
    end
    object punkti_4: TWideStringField
      FieldName = #1042#1088#1077#1084#1103'_'#1086#1090#1087#1088
      Size = 10
    end
    object punktiField: TStringField
      FieldKind = fkLookup
      FieldName = #1053#1072#1087#1088#1103#1084#1086#1082
      LookupDataSet = napravlenie
      LookupKeyFields = #1050#1086#1076'_'#1085#1072#1087#1088
      LookupResultField = #1053#1072#1087#1088
      KeyFields = #1050#1086#1076'_'#1085#1072#1087#1088
      Size = 50
      Lookup = True
    end
  end
  object bilet: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1041#1080#1083#1077#1090
    Left = 32
    Top = 272
  end
  object pasagir: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1055#1072#1089#1089#1072#1078#1080#1088
    Left = 32
    Top = 320
    object pasagir_: TAutoIncField
      FieldName = #1050#1086#1076'_'#1087#1072#1089
      ReadOnly = True
    end
    object pasagirDSDesigner: TWideStringField
      FieldName = #1060#1072#1084#1080#1083#1080#1103
      Size = 50
    end
    object pasagirDSDesigner2: TWideStringField
      FieldName = #1048#1084#1103
      Size = 50
    end
    object pasagirDSDesigner3: TWideStringField
      FieldName = #1054#1090#1095#1077#1089#1090#1074#1086
      Size = 50
    end
    object pasagir_2: TWideStringField
      FieldName = #1055#1072#1089#1087'_'#1089#1077#1088#1080#1103
      Size = 5
    end
    object pasagir_3: TIntegerField
      FieldName = #1055#1072#1089#1087'_'#1085#1086#1084
    end
  end
  object tip_vagona: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1058#1080#1087'_'#1074#1072#1075#1086#1085#1072
    Left = 32
    Top = 368
  end
  object servis: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1057#1077#1088#1074#1080#1089
    Left = 32
    Top = 416
    object servisDSDesigner: TWideStringField
      FieldName = #1050#1086#1076#1089#1077#1088#1074#1080#1089#1072
      Size = 10
    end
    object servis_: TWideStringField
      FieldName = #1053#1072#1079#1074#1072#1085#1080#1077'_'#1089
      Size = 100
    end
    object servis__: TWideStringField
      FieldName = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1074
      Size = 255
    end
    object servis_2: TFloatField
      FieldName = #1057#1090#1086#1080#1084#1086#1089#1090#1100'_'#1089
    end
    object servisField: TStringField
      FieldKind = fkLookup
      FieldName = #1042#1072#1075#1086#1085
      LookupDataSet = tip_vagona
      LookupKeyFields = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1074
      LookupResultField = #1058#1080#1087'_'#1074
      KeyFields = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1074
      Lookup = True
    end
  end
  object DStip_poezda: TDataSource
    DataSet = tip_poezda
    Left = 104
    Top = 72
  end
  object DSpoezd: TDataSource
    DataSet = poezd
    Left = 104
    Top = 128
  end
  object DSnapravlenie: TDataSource
    DataSet = napravlenie
    Left = 104
    Top = 176
  end
  object DSpunkti: TDataSource
    DataSet = punkti
    Left = 104
    Top = 224
  end
  object DSbilet: TDataSource
    DataSet = bilet
    Left = 104
    Top = 272
  end
  object DSpasagir: TDataSource
    DataSet = pasagir
    Left = 104
    Top = 320
  end
  object DStip_vagona: TDataSource
    DataSet = tip_vagona
    Left = 104
    Top = 368
  end
  object DSservis: TDataSource
    DataSet = servis
    Left = 104
    Top = 416
  end
  object sql_poezd_po_napravleniyu: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    DataSource = DSpoezd
    Parameters = <
      item
        Name = 'qqq'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      'select '#1085#1086#1084#1077#1088'_'#1087#1086#1077#1079#1076#1072', '#1082#1086#1076'_'#1090#1080#1087#1072'_'#1087
      'from '#1087#1086#1077#1079#1076', '#1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      'where '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088'='#1087#1086#1077#1079#1076'.'#1082#1086#1076'_'#1085#1072#1087#1088' and'
      #1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1085#1072#1087#1088'=:qqq')
    Left = 96
    Top = 608
  end
  object DSpoezd_po_napr: TDataSource
    DataSet = sql_poezd_po_napravleniyu
    Left = 96
    Top = 664
  end
  object sql_servic: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    DataSource = DSservis
    Parameters = <
      item
        Name = 'www'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      'select '#1082#1086#1076#1089#1077#1088#1074#1080#1089#1072', '#1085#1072#1079#1074#1072#1085#1080#1077'_'#1089', '#1089#1090#1086#1080#1084#1086#1089#1090#1100'_'#1089', '#1057#1090#1086#1080#1084#1086#1089#1090#1100'_'#1074
      'from '#1089#1077#1088#1074#1080#1089', '#1090#1080#1087'_'#1074#1072#1075#1086#1085#1072
      'where '#1090#1080#1087'_'#1074#1072#1075#1086#1085#1072'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1074' = '#1089#1077#1088#1074#1080#1089'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1074' and'
      #1090#1080#1087'_'#1074#1072#1075#1086#1085#1072'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1074'=:www')
    Left = 216
    Top = 608
  end
  object DSsql_servic: TDataSource
    DataSet = sql_servic
    Left = 216
    Top = 664
  end
  object sql_punkti: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    DataSource = DSpunkti
    Parameters = <
      item
        Name = 'eee'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      'select '#1082#1086#1076'_'#1087#1091#1085#1082#1090#1072', '#1087#1091#1085#1082#1090', '#1082#1080#1083#1086#1084#1077#1090#1088', '#1074#1088#1077#1084#1103'_'#1087#1088#1080#1073', '#1074#1088#1077#1084#1103'_'#1086#1090#1087#1088
      'from '#1087#1091#1085#1082#1090#1099', '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      'where '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088'='#1087#1091#1085#1082#1090#1099'.'#1082#1086#1076'_'#1085#1072#1087#1088' and'
      #1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088'=:eee')
    Left = 304
    Top = 608
  end
  object DSsql_punkti: TDataSource
    DataSet = sql_punkti
    Left = 304
    Top = 664
  end
  object vart_km: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1057#1090#1086#1080#1084#1086#1089#1090#1100'_'#1082#1084
    Left = 32
    Top = 472
  end
  object DSmod_bilet: TDataSource
    DataSet = mod_bilet
    Left = 264
    Top = 272
  end
  object mod_bilet: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = #1041#1080#1083#1077#1090
    Left = 176
    Top = 272
    object mod_bilet_: TAutoIncField
      FieldName = #1050#1086#1076'_'#1073#1080#1083#1077#1090#1072
      ReadOnly = True
    end
    object mod_biletField: TStringField
      FieldKind = fkLookup
      FieldName = #1055#1072#1089#1072#1078#1080#1088
      LookupDataSet = pasagir
      LookupKeyFields = #1050#1086#1076'_'#1087#1072#1089
      LookupResultField = #1060#1072#1084#1080#1083#1080#1103
      KeyFields = #1050#1086#1076'_'#1087#1072#1089
      Lookup = True
    end
    object mod_bilet_3: TIntegerField
      FieldName = #1050#1086#1076'_'#1085#1072#1087#1088
    end
    object mod_bilet_4: TIntegerField
      FieldName = #1053#1086#1084#1077#1088'_'#1087#1086#1077#1079#1076#1072
    end
    object mod_bilet_11: TStringField
      FieldKind = fkLookup
      FieldName = #1058#1080#1087'_'#1074#1072#1075#1086#1085#1072
      LookupDataSet = tip_vagona
      LookupKeyFields = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1074
      LookupResultField = #1058#1080#1087'_'#1074
      KeyFields = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1074
      Size = 50
      Lookup = True
    end
    object mod_bilet_5: TIntegerField
      FieldName = #1053#1086#1084#1077#1088'_'#1074#1072#1075#1086#1085#1072
    end
    object mod_biletDSDesigner: TIntegerField
      FieldName = #1052#1077#1089#1090#1086
    end
    object mod_bilet_12: TStringField
      FieldKind = fkLookup
      FieldName = #1055#1091#1085#1082#1090'_'#1086#1090#1087#1088
      LookupDataSet = punkti
      LookupKeyFields = #1082#1086#1076'_'#1087#1091#1085#1082#1090#1072
      LookupResultField = #1087#1091#1085#1082#1090
      KeyFields = #1050#1086#1076'_'#1087'_'#1086#1090#1087#1088
      Lookup = True
    end
    object mod_bilet_13: TStringField
      FieldKind = fkLookup
      FieldName = #1055#1091#1085#1082#1090'_'#1087#1088#1080#1073
      LookupDataSet = punkti
      LookupKeyFields = #1082#1086#1076'_'#1087#1091#1085#1082#1090#1072
      LookupResultField = #1087#1091#1085#1082#1090
      KeyFields = #1050#1086#1076'_'#1087'_'#1087#1088#1080#1073
      Lookup = True
    end
    object mod_bilet_6: TDateTimeField
      FieldName = #1044#1072#1090#1072'_'#1086#1090#1087#1088
    end
    object mod_bilet_7: TWideStringField
      FieldName = #1042#1088#1077#1084#1103'_'#1086#1090#1087#1088
      Size = 10
    end
    object mod_bilet_8: TDateTimeField
      FieldName = #1044#1072#1090#1072'_'#1087#1088#1080#1073
    end
    object mod_bilet_9: TWideStringField
      FieldName = #1042#1088#1077#1084#1103'_'#1087#1088#1080#1073
      Size = 10
    end
    object mod_bilet_10: TWideStringField
      FieldName = #1050#1086#1076'_'#1089#1077#1088#1074#1080#1089#1072
      Size = 10
    end
    object mod_biletField3: TStringField
      FieldKind = fkLookup
      FieldName = #1057#1077#1088#1074#1080#1089
      LookupDataSet = servis
      LookupKeyFields = #1050#1086#1076#1089#1077#1088#1074#1080#1089#1072
      LookupResultField = #1053#1072#1079#1074#1072#1085#1080#1077'_'#1089
      KeyFields = #1050#1086#1076'_'#1089#1077#1088#1074#1080#1089#1072
      Size = 50
      Lookup = True
    end
    object mod_biletDSDesigner2: TIntegerField
      FieldName = #1050#1080#1083#1086#1084#1077#1090#1088#1072#1078
    end
    object mod_biletDSDesigner3: TBCDField
      FieldName = #1057#1090#1086#1080#1084#1086#1089#1090#1100
      Precision = 19
    end
    object mod_bilet_2: TIntegerField
      FieldName = #1050#1086#1076'_'#1087#1072#1089
    end
    object mod_bilet__: TWideStringField
      FieldName = #1050#1086#1076'_'#1090#1080#1087#1072'_'#1074
      Size = 10
    end
    object mod_bilet__2: TIntegerField
      FieldName = #1050#1086#1076'_'#1087'_'#1086#1090#1087#1088
    end
    object mod_bilet__3: TIntegerField
      FieldName = #1050#1086#1076'_'#1087'_'#1087#1088#1080#1073
    end
    object mod_biletField2: TStringField
      FieldKind = fkLookup
      FieldName = #1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      LookupDataSet = napravlenie
      LookupKeyFields = #1050#1086#1076'_'#1085#1072#1087#1088
      LookupResultField = #1053#1072#1087#1088
      KeyFields = #1050#1086#1076'_'#1085#1072#1087#1088
      Size = 50
      Lookup = True
    end
  end
  object sql_find_punkti: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'qqqq'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      'select '#1082#1086#1076'_'#1087#1091#1085#1082#1090#1072', '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088', '#1085#1072#1087#1088', '#1087#1091#1085#1082#1090
      'from '#1087#1091#1085#1082#1090#1099', '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      'where '#1087#1091#1085#1082#1090#1099'.'#1082#1086#1076'_'#1085#1072#1087#1088'='#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088' and'
      #1087#1091#1085#1082#1090'=:qqqq'
      '')
    Left = 528
    Top = 40
  end
  object DSsql_find_punkti: TDataSource
    DataSet = sql_find_punkti
    Left = 528
    Top = 96
  end
  object sql_find_napr: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'wwww'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      'select '#1087#1091#1085#1082#1090', '#1074#1088#1077#1084#1103'_'#1087#1088#1080#1073', '#1074#1088#1077#1084#1103'_'#1086#1090#1087#1088
      'from '#1055#1091#1085#1082#1090#1099
      'where '#1082#1086#1076'_'#1085#1072#1087#1088'=:wwww'
      'order by '#1074#1088#1077#1084#1103'_'#1087#1088#1080#1073)
    Left = 528
    Top = 152
  end
  object DSsql_find_napr: TDataSource
    DataSet = sql_find_napr
    Left = 528
    Top = 208
  end
  object sql_find_train: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'eeee'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      'select '#1085#1072#1087#1088', '#1085#1086#1084#1077#1088'_'#1087#1086#1077#1079#1076#1072', '#1090#1080#1087'_'#1087
      'from '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077', '#1087#1086#1077#1079#1076', '#1090#1080#1087'_'#1087#1086#1077#1079#1076#1072
      'where '#1087#1086#1077#1079#1076'.'#1082#1086#1076'_'#1085#1072#1087#1088'='#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088' and'
      #1087#1086#1077#1079#1076'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1087'='#1090#1080#1087'_'#1087#1086#1077#1079#1076#1072'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1087' and'
      #1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088'=:eeee')
    Left = 528
    Top = 264
  end
  object DSsql_find_train: TDataSource
    DataSet = sql_find_train
    Left = 528
    Top = 320
  end
  object sql_print_ticket: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'xxxx'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      
        'select distinct '#1082#1086#1076'_'#1073#1080#1083#1077#1090#1072', '#1060#1072#1084#1080#1083#1080#1103', '#1048#1084#1103', '#1087#1072#1089#1087'_'#1089#1077#1088#1080#1103', '#1087#1072#1089#1087'_'#1085#1086#1084', ' +
        #1085#1072#1087#1088', '
      
        #1085#1086#1084#1077#1088'_'#1087#1086#1077#1079#1076#1072', '#1090#1080#1087'_'#1074', '#1085#1086#1084#1077#1088'_'#1074#1072#1075#1086#1085#1072', '#1084#1077#1089#1090#1086', '#1076#1072#1090#1072'_'#1086#1090#1087#1088', '#1073#1080#1083#1077#1090'.'#1074#1088#1077#1084#1103 +
        '_'#1086#1090#1087#1088', '#1076#1072#1090#1072'_'#1087#1088#1080#1073','
      #1073#1080#1083#1077#1090'.'#1074#1088#1077#1084#1103'_'#1087#1088#1080#1073', '#1085#1072#1079#1074#1072#1085#1080#1077'_'#1089', '#1082#1080#1083#1086#1084#1077#1090#1088#1072#1078', '#1089#1090#1086#1080#1084#1086#1089#1090#1100
      ''
      'from '#1073#1080#1083#1077#1090', '#1087#1072#1089#1089#1072#1078#1080#1088', '#1087#1091#1085#1082#1090#1099', '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077', '#1090#1080#1087'_'#1074#1072#1075#1086#1085#1072', '#1089#1077#1088#1074#1080#1089
      ''
      'where '#1087#1072#1089#1089#1072#1078#1080#1088'.'#1082#1086#1076'_'#1087#1072#1089'='#1073#1080#1083#1077#1090'.'#1082#1086#1076'_'#1087#1072#1089' AND'
      #1073#1080#1083#1077#1090'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1074'='#1090#1080#1087'_'#1074#1072#1075#1086#1085#1072'.'#1082#1086#1076'_'#1090#1080#1087#1072'_'#1074' AND'
      #1073#1080#1083#1077#1090'.'#1082#1086#1076'_'#1085#1072#1087#1088'='#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'.'#1082#1086#1076'_'#1085#1072#1087#1088' AND'
      #1073#1080#1083#1077#1090'.'#1082#1086#1076'_'#1089#1077#1088#1074#1080#1089#1072'='#1089#1077#1088#1074#1080#1089'.'#1082#1086#1076#1089#1077#1088#1074#1080#1089#1072' AND'
      #1082#1086#1076'_'#1073#1080#1083#1077#1090#1072'=:xxxx'
      '')
    Left = 384
    Top = 416
  end
  object DSsql_print_ticket: TDataSource
    DataSet = sql_print_ticket
    Left = 384
    Top = 464
  end
  object sql_filter_punkt: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select '#1082#1086#1076'_'#1085#1072#1087#1088', '#1085#1072#1087#1088
      'from '#1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077)
    Left = 176
    Top = 224
    object sql_filter_punkt_: TAutoIncField
      FieldName = #1082#1086#1076'_'#1085#1072#1087#1088
      ReadOnly = True
    end
    object sql_filter_punktDSDesigner: TWideStringField
      FieldName = #1085#1072#1087#1088
      Size = 100
    end
  end
  object sql_filter_tip: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select '#1082#1086#1076'_'#1090#1080#1087#1072'_'#1087', '#1090#1080#1087'_'#1087
      'from '#1090#1080#1087'_'#1087#1086#1077#1079#1076#1072)
    Left = 264
    Top = 224
  end
  object adm: TADOTable
    Active = True
    Connection = rail
    CursorType = ctStatic
    TableName = 'admin'
    Left = 32
    Top = 520
  end
  object DSAdmin: TDataSource
    DataSet = adm
    Left = 96
    Top = 520
  end
  object sql_filter_pas: TADOQuery
    Active = True
    Connection = rail
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select '#1082#1086#1076'_'#1087#1072#1089', '#1092#1072#1084#1080#1083#1080#1103
      'from '#1087#1072#1089#1089#1072#1078#1080#1088)
    Left = 176
    Top = 320
  end
end
