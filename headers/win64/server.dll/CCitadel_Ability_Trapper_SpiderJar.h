#pragma once

class CCitadel_Ability_Trapper_SpiderJar : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0xF70, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF7C, size 0xC, align 4
    bool m_bHasMadeSpiders; // offset 0xF88, size 0x1, align 1
    char _pad_0F89[0x607]; // offset 0xF89
};
