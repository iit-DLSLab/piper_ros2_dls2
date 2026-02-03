# Install script for directory: /home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/src/quadruped_hal

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/install/quadruped_hal")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/gturrisi-iit.local/miniforge3/envs/basic_locomotion_dls_isaaclab_ros2_env/bin/x86_64-conda-linux-gnu-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/quadruped_hal")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal"
         OLD_RPATH "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/src/quadruped_hal/src:/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/unitree_ros2/cyclonedds_ws/install/unitree_go/lib:/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/install/dls2_interface/lib:/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/unitree_ros2/cyclonedds_ws/install/unitree_hg/lib:/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/unitree_ros2/cyclonedds_ws/install/unitree_api/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/gturrisi-iit.local/miniforge3/envs/basic_locomotion_dls_isaaclab_ros2_env/bin/x86_64-conda-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/quadruped_hal")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/quadruped_hal")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/quadruped_hal")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal/environment" TYPE FILE FILES "/home/gturrisi-iit.local/miniforge3/envs/basic_locomotion_dls_isaaclab_ros2_env/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal/environment" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal/environment" TYPE FILE FILES "/home/gturrisi-iit.local/miniforge3/envs/basic_locomotion_dls_isaaclab_ros2_env/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal/environment" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_index/share/ament_index/resource_index/packages/quadruped_hal")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal/cmake" TYPE FILE FILES
    "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_core/quadruped_halConfig.cmake"
    "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/ament_cmake_core/quadruped_halConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quadruped_hal" TYPE FILE FILES "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/src/quadruped_hal/package.xml")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/gturrisi-iit.local/other_ws_home/unitree_ros2_dls/ros2_ws/build/quadruped_hal/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
