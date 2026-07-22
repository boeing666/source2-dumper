#pragma once

class CTextureSheetDoc_Sequence  // sizeof 0x48, align 0x8 (texturelib) {MGetKV3ClassDefaults}
{
public:
    SequenceChannelMode_t m_ChannelMode; // offset 0x0, size 0x4, align 4 | MPropertyAutoRebuildOnChange
    SequenceLoopMode_t m_LoopMode; // offset 0x4, size 0x4, align 4
    SequenceAlphaCropMode_t m_AlphaCropMode; // offset 0x8, size 0x4, align 4
    CTextureSheetDoc_SequenceDecalParams m_DecalParams; // offset 0xC, size 0x24, align 4 | MPropertySuppressExpr
    CUtlVector< CTextureSheetDoc_Frame > m_Frames; // offset 0x30, size 0x18, align 8 | MPropertyAutoExpandSelf
};
