pipeline {
    agent any
    
    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        
        stage('Install Dependencies') {
            steps {
                sh '''
                    sudo apt-get update
                    sudo apt-get install -y cmake build-essential
                '''
            }
        }
        
        stage('Configure') {
            steps {
                sh '''
                    rm -rf build
                    mkdir build
                    cd build
                    cmake .. -DCMAKE_BUILD_TYPE=Debug -DBUILD_TESTS=ON
                '''
            }
        }
        
        stage('Build') {
            steps {
                sh '''
                    cd build
                    cmake --build . -j $(nproc)
                '''
            }
        }
        
        stage('Test') {
            steps {
                sh '''
                    cd build
                    ctest --output-on-failure
                '''
            }
        }
    }
}