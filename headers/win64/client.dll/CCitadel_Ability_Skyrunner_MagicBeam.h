#pragma once

class CCitadel_Ability_Skyrunner_MagicBeam : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x12F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    Vector m_vCastPosition; // offset 0x11D8, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0x11E4, size 0xC, align 4
    char _pad_11F0[0x100]; // offset 0x11F0
};
