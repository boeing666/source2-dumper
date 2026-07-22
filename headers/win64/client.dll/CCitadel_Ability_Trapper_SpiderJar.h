#pragma once

class CCitadel_Ability_Trapper_SpiderJar : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x11D8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x11E4, size 0xC, align 4
    bool m_bHasMadeSpiders; // offset 0x11F0, size 0x1, align 1
    char _pad_11F1[0x607]; // offset 0x11F1
};
