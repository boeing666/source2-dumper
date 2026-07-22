#pragma once

class CBlood : public CPointEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    QAngle m_vecSprayAngles; // offset 0x788, size 0xC, align 4
    Vector m_vecSprayDir; // offset 0x794, size 0xC, align 4
    float32 m_flAmount; // offset 0x7A0, size 0x4, align 4
    BloodType m_Color; // offset 0x7A4, size 0x4, align 4
};
