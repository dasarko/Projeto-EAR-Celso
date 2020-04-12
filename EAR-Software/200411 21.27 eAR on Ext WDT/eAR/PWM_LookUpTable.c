 // LookUpTable GEN 1.0 - X Axis: Desired Speed, Y Axis: PWM -  X1:6  X2:125  Y1:20  Y2:90  A:0.5882  B:16.4706
const unsigned char PWM_Table [256] = {
 16 , // 0
 17 , // 1
 18 , // 2
 18 , // 3
 19 , // 4
 19 , // 5
 20 , // 6
 21 , // 7
 21 , // 8
 22 , // 9
 22 , // 10
 23 , // 11
 24 , // 12
 24 , // 13
 25 , // 14
 25 , // 15
 26 , // 16
 26 , // 17
 27 , // 18
 28 , // 19
 28 , // 20
 29 , // 21
 29 , // 22
 30 , // 23
 31 , // 24
 31 , // 25
 32 , // 26
 32 , // 27
 33 , // 28
 34 , // 29
 34 , // 30
 35 , // 31
 35 , // 32
 36 , // 33
 36 , // 34
 37 , // 35
 38 , // 36
 38 , // 37
 39 , // 38
 39 , // 39
 40 , // 40
 41 , // 41
 41 , // 42
 42 , // 43
 42 , // 44
 43 , // 45
 44 , // 46
 44 , // 47
 45 , // 48
 45 , // 49
 46 , // 50
 46 , // 51
 47 , // 52
 48 , // 53
 48 , // 54
 49 , // 55
 49 , // 56
 50 , // 57
 51 , // 58
 51 , // 59
 52 , // 60
 52 , // 61
 53 , // 62
 54 , // 63
 54 , // 64
 55 , // 65
 55 , // 66
 56 , // 67
 56 , // 68
 57 , // 69
 58 , // 70
 58 , // 71
 59 , // 72
 59 , // 73
 60 , // 74
 61 , // 75
 61 , // 76
 62 , // 77
 62 , // 78
 63 , // 79
 64 , // 80
 64 , // 81
 65 , // 82
 65 , // 83
 66 , // 84
 66 , // 85
 67 , // 86
 68 , // 87
 68 , // 88
 69 , // 89
 69 , // 90
 70 , // 91
 71 , // 92
 71 , // 93
 72 , // 94
 72 , // 95
 73 , // 96
 74 , // 97
 74 , // 98
 75 , // 99
 75 , // 100
 76 , // 101
 76 , // 102
 77 , // 103
 78 , // 104
 78 , // 105
 79 , // 106
 79 , // 107
 80 , // 108
 81 , // 109
 81 , // 110
 82 , // 111
 82 , // 112
 83 , // 113
 84 , // 114
 84 , // 115
 85 , // 116
 85 , // 117
 86 , // 118
 86 , // 119
 87 , // 120
 88 , // 121
 88 , // 122
 89 , // 123
 89 , // 124
 90 , // 125
 91 , // 126
 91 , // 127
 92 , // 128
 92 , // 129
 93 , // 130
 94 , // 131
 94 , // 132
 95 , // 133
 95 , // 134
 96 , // 135
 96 , // 136
 97 , // 137
 98 , // 138
 98 , // 139
 99 , // 140
 99 , // 141
 100 , // 142
 101 , // 143
 101 , // 144
 102 , // 145
 102 , // 146
 103 , // 147
 104 , // 148
 104 , // 149
 105 , // 150
 105 , // 151
 106 , // 152
 106 , // 153
 107 , // 154
 108 , // 155
 108 , // 156
 109 , // 157
 109 , // 158
 110 , // 159
 111 , // 160
 111 , // 161
 112 , // 162
 112 , // 163
 113 , // 164
 114 , // 165
 114 , // 166
 115 , // 167
 115 , // 168
 116 , // 169
 116 , // 170
 117 , // 171
 118 , // 172
 118 , // 173
 119 , // 174
 119 , // 175
 120 , // 176
 121 , // 177
 121 , // 178
 122 , // 179
 122 , // 180
 123 , // 181
 124 , // 182
 124 , // 183
 125 , // 184
 125 , // 185
 126 , // 186
 126 , // 187
 127 , // 188
 128 , // 189
 128 , // 190
 129 , // 191
 129 , // 192
 130 , // 193
 131 , // 194
 131 , // 195
 132 , // 196
 132 , // 197
 133 , // 198
 134 , // 199
 134 , // 200
 135 , // 201
 135 , // 202
 136 , // 203
 136 , // 204
 137 , // 205
 138 , // 206
 138 , // 207
 139 , // 208
 139 , // 209
 140 , // 210
 141 , // 211
 141 , // 212
 142 , // 213
 142 , // 214
 143 , // 215
 144 , // 216
 144 , // 217
 145 , // 218
 145 , // 219
 146 , // 220
 146 , // 221
 147 , // 222
 148 , // 223
 148 , // 224
 149 , // 225
 149 , // 226
 150 , // 227
 151 , // 228
 151 , // 229
 152 , // 230
 152 , // 231
 153 , // 232
 154 , // 233
 154 , // 234
 155 , // 235
 155 , // 236
 156 , // 237
 156 , // 238
 157 , // 239
 158 , // 240
 158 , // 241
 159 , // 242
 159 , // 243
 160 , // 244
 161 , // 245
 161 , // 246
 162 , // 247
 162 , // 248
 163 , // 249
 164 , // 250
 164 , // 251
 165 , // 252
 165 , // 253
 166 , // 254
 166  // 255
 };
