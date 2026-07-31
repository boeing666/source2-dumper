#pragma once

class CDOTA_Modifier_Clinkz_Burning_Army_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_iCount; // offset 0x1A78, size 0x4, align 4
    int32 count; // offset 0x1A7C, size 0x4, align 4
    int32 range; // offset 0x1A80, size 0x4, align 4
    VectorWS m_vFacePosition; // offset 0x1A84, size 0xC, align 4
};
