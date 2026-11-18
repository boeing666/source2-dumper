#pragma once

class CDOTA_Ability_MudGolem_HurlBigBoulder : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 base_damage; // offset 0x85C, size 0x4, align 4
    float32 impact_radius; // offset 0x860, size 0x4, align 4
    float32 stun_duration; // offset 0x864, size 0x4, align 4
    char _pad_0868[0x14]; // offset 0x868
    VectorWS vTargetPos; // offset 0x87C, size 0xC, align 4
};
