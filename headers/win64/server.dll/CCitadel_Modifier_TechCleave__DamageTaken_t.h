#pragma once

struct CCitadel_Modifier_TechCleave::DamageTaken_t  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
    float32 m_flDamageAmount; // offset 0x0, size 0x4, align 4
    GameTime_t m_flTimeToExpire; // offset 0x4, size 0x4, align 255
    CHandle< CBaseEntity > m_ProcAbility; // offset 0x8, size 0x4, align 4
    CHandle< CBaseEntity > m_pTarget; // offset 0xC, size 0x4, align 4
};
