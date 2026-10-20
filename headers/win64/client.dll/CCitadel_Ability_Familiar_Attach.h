#pragma once

class CCitadel_Ability_Familiar_Attach : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecTagAlongVisitedAllies; // offset 0x16E8, size 0x18, align 8
    CHandle< C_BaseEntity > m_hLastAttachedTo; // offset 0x1700, size 0x4, align 4
    char _pad_1704[0x6E4]; // offset 0x1704
};
