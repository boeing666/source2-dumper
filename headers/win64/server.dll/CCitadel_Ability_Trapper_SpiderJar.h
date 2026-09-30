#pragma once

class CCitadel_Ability_Trapper_SpiderJar : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0x14A0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14AC, size 0xC, align 4
    bool m_bHasMadeSpiders; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x847]; // offset 0x14B9
};
