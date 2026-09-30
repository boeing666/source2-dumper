#pragma once

class CNPC_BarrackBoss_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x3D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x388]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > b_dying; // offset 0x388, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_dead; // offset 0x3A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_shield_active; // offset 0x3B8, size 0x18, align 8
};
