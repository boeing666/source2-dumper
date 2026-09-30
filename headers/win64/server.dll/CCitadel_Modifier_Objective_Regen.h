#pragma once

class CCitadel_Modifier_Objective_Regen : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flLastAttackedTime; // offset 0x140, size 0x4, align 255
    char _pad_0144[0x4]; // offset 0x144
};
