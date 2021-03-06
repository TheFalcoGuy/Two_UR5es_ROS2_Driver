
#ifndef MOVEIT_ROBOT_INTERACTION_EXPORT_H
#define MOVEIT_ROBOT_INTERACTION_EXPORT_H

#ifdef MOVEIT_ROBOT_INTERACTION_STATIC_DEFINE
#  define MOVEIT_ROBOT_INTERACTION_EXPORT
#  define MOVEIT_ROBOT_INTERACTION_NO_EXPORT
#else
#  ifndef MOVEIT_ROBOT_INTERACTION_EXPORT
#    ifdef moveit_robot_interaction_EXPORTS
        /* We are building this library */
#      define MOVEIT_ROBOT_INTERACTION_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MOVEIT_ROBOT_INTERACTION_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MOVEIT_ROBOT_INTERACTION_NO_EXPORT
#    define MOVEIT_ROBOT_INTERACTION_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MOVEIT_ROBOT_INTERACTION_DEPRECATED
#  define MOVEIT_ROBOT_INTERACTION_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MOVEIT_ROBOT_INTERACTION_DEPRECATED_EXPORT
#  define MOVEIT_ROBOT_INTERACTION_DEPRECATED_EXPORT MOVEIT_ROBOT_INTERACTION_EXPORT MOVEIT_ROBOT_INTERACTION_DEPRECATED
#endif

#ifndef MOVEIT_ROBOT_INTERACTION_DEPRECATED_NO_EXPORT
#  define MOVEIT_ROBOT_INTERACTION_DEPRECATED_NO_EXPORT MOVEIT_ROBOT_INTERACTION_NO_EXPORT MOVEIT_ROBOT_INTERACTION_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MOVEIT_ROBOT_INTERACTION_NO_DEPRECATED
#    define MOVEIT_ROBOT_INTERACTION_NO_DEPRECATED
#  endif
#endif

#endif /* MOVEIT_ROBOT_INTERACTION_EXPORT_H */
