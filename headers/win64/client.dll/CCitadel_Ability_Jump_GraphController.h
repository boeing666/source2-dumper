#pragma once

class CCitadel_Ability_Jump_GraphController : public CCitadelBaseAbilityGraphController /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< bool > m_bDashJump; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bJump; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< char* > m_pszLaunchType; // offset 0xE0, size 0x30, align 8
};
