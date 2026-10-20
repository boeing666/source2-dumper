#pragma once

class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1700]; // offset 0x0
    QAngle m_angBeamAngles; // offset 0x1700, size 0xC, align 4
    char _pad_170C[0x84]; // offset 0x170C
    bool m_bNeedsBeamReset; // offset 0x1790, size 0x1, align 1
    char _pad_1791[0x2C7]; // offset 0x1791
};
