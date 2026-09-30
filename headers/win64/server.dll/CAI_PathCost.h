#pragma once

class CAI_PathCost : public CNavPathCost /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CHandle< CAI_BaseNPC > m_hNpc; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
    CNavRestrictionVolumeCached m_navRestrictionVolume; // offset 0x58, size 0x28, align 8
    CNavAttribute m_DisallowedAttributes; // offset 0x80, size 0x8, align 255
    uint32 m_nDisallowedAttributesDynamic; // offset 0x88, size 0x4, align 4
    bool m_bNavLinksEnabled; // offset 0x8C, size 0x1, align 1
    char _pad_008D[0x3]; // offset 0x8D
    float32 m_flNavLinkPenalty; // offset 0x90, size 0x4, align 4
    float32 m_flAvoidanceAreaCost; // offset 0x94, size 0x4, align 4
    float32 m_flAvoidanceAreaDistScale; // offset 0x98, size 0x4, align 4
    char _pad_009C[0x4]; // offset 0x9C
    CUtlVectorFixed< INavPathCostAreaFilter*, 4 > m_vecFuncAreaFilter; // offset 0xA0, size 0x28, align 8
    CHandle< CBaseEntity > m_hIgnoreBlockingEntity; // offset 0xC8, size 0x4, align 4
    char _pad_00CC[0x4]; // offset 0xCC
};
