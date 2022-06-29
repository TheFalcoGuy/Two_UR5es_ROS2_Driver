from abc import ABC, abstractmethod
from typing import Tuple


class Gripper(ABC):

    @abstractmethod
    def goTo(self, position: int, speed: int, force: int) -> Tuple[bool, int]:
        pass 
    
    @abstractmethod
    def get_current_position(self) -> int:
        pass 

    @abstractmethod
    def activate(self):
        pass

    @abstractmethod
    def reset(self):
        pass
    
    # TODO: Add calibration from 0 to 255
    