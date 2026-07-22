#pragma once

enum DOTASelectionPriorityChoice : uint32_t  // sizeof 0x4
{
    k_DOTASelectionPriorityChoice_Invalid = 0,
    k_DOTASelectionPriorityChoice_FirstPick = 1,
    k_DOTASelectionPriorityChoice_SecondPick = 2,
    k_DOTASelectionPriorityChoice_Radiant = 3,
    k_DOTASelectionPriorityChoice_Dire = 4,
};
