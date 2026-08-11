#pragma once

class CCitadel_Ability_Skyrunner_MagicBeam : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1088, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vCastPosition; // offset 0xF70, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0xF7C, size 0xC, align 4
    char _pad_0F88[0x100]; // offset 0xF88
};
