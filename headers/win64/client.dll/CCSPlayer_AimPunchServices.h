#pragma once

class CCSPlayer_AimPunchServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    GameTick_t m_predictableBaseTick; // offset 0x48, size 0x4, align 255
    float32 m_predictableBaseTickInterpAmount; // offset 0x4C, size 0x4, align 4
    QAngle m_predictableBaseAngle; // offset 0x50, size 0xC, align 4
    QAngle m_predictableBaseAngleVel; // offset 0x5C, size 0xC, align 4
    char _pad_0068[0x38]; // offset 0x68
    GameTick_t m_unpredictableBaseTick; // offset 0xA0, size 0x4, align 255
    QAngle m_unpredictableBaseAngle; // offset 0xA4, size 0xC, align 4
    char _pad_00B0[0x38]; // offset 0xB0
};
