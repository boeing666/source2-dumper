#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood_VisionObstruction : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 width; // offset 0x1A7C, size 0x4, align 4
    int32 obscure_vision; // offset 0x1A80, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1A84, size 0xC, align 4
};
