#pragma once

enum PetLevelup_Rule_t : uint32_t  // sizeof 0x4
{
    PETLEVELFROM_NOTHING = 0,
    PETLEVELFROM_KILLEATER = 1,
    PETLEVELFROM_COMPENDIUM_LEVEL = 2,
    NUM_PETLEVELUPRULES = 3,
};
