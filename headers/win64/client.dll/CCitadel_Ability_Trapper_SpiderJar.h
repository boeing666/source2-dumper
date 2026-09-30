#pragma once

class CCitadel_Ability_Trapper_SpiderJar : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x16D8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16E4, size 0xC, align 4
    bool m_bHasMadeSpiders; // offset 0x16F0, size 0x1, align 1
    char _pad_16F1[0x847]; // offset 0x16F1
};
